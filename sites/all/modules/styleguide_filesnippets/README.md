# Styleguide File Snippets

This module allows the [Styleguide](https://www.drupal.org/project/styleguide) to be extended with snippet files from the local filesystem. The goal is to allow front-end developers to easily add markup components to a code repository so that they may be:

- styled before a back-end developer creates the related functionality
- shown to clients for discussion and/or approval
- easily shared with other developers


## Installation

Enable this module, and visit `/admin/appearance/styleguide/filesnippets` to configure the directory to be scanned for snippets.

Add one or more snippet files to that directory. Subdirectories are allowed.

Visit the styleguide for any theme. E.g. `/admin/appearance/styleguide/bartik`.


## Snippet Format

Snippet files may be in one of two formats: `.html` or `.inc`.

### .html format

This is the simplest format. Just add subdirectories to your configured snippets directory and place markup fragments in files with an `.html` extension.

The subdirectory name will be used as the item group, and the markup as the item contents. For example, if you place the following:

    <div class="well">Content in a well.</div>

in the directory `CONFIGURED_DIRECTORY/Components/Bootstrap Well.html` and view the styleguide, you'll see the rendered content in a style group called 'Components'.

### .inc format

Snippet files may use the `.inc` file extension and return an array in the same format as hook_styleguide(). See that function definition in styleguide.api.php for more information.

Here's an example:

    <?php
    return array(
      'title' => t('Article Node Teaser'),
      'description' => 'This is an article node when displayed with via the teaser view mode.',
      'content' => '<div id="node-1" class="node node-article node-promoted node-teaser clearfix">

      <h2>
      <a href="/node/1">Promoted node</a>
      </h2>

      <div class="meta submitted">
      Submitted by <a href="/user/1" title="View user profile." class="username">admin</a> on Mon, 12/29/2014 - 11:39    </div>

      <div class="content clearfix">
      <div class="field field-name-body field-type-text-with-summary field-label-hidden"><div class="field-items"><div class="field-item even"><p>Praesent commodo cursus magna, vel scelerisque nisl consectetur et. Aenean eu leo quam. Pellentesque ornare sem lacinia quam venenatis vestibulum.</p>
      </div></div></div>  </div>

      <div class="link-wrapper">
      <ul class="links inline"><li class="node-readmore first last"><a href="/node/1" rel="tag" title="Promoted node">Read more<span class="element-invisible"> about Promoted node</span></a></li>
      </ul>    </div>


      </div>',
      'group' => t('Components'),
    );


## How to work with this module

Here's a recommended process to follow when adding a new feature to the site:

When adding a new custom element, class or component to a site follow this process:

- Define any new components with client / designer
- Check the style guide to see if there are any existing components that can be reused
- Define markup with designer
- Add to style guide using this module
- Style markup
- Review with client
- Develop the required functionality and ensure that it generates the same markup

For more iterative markup definition development, consider the `styleguide_gist` module.
