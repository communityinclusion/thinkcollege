One-time login is a small utility module which allows you to e-mail one-time
login links to selected users, and can also generate a CSV of one-time login
URLs for selected users.


Once enabled, this module adds five operations to the Administration >> People
page at admin/people:

 - Send welcome (new user created by administrator) e-mail to the selected
   users,
 - Send welcome (no approval required) e-mail to the selected users,
 - Send password recovery e-mail to the selected users,
 - Send account activation e-mail to the selected users, and
 - Download CSV of one-time login URLs for the selected users.

The CSV has the following columns in this order:

[ user ID | user name | user e-mail address | one-time login URL |
  expiration date (if any) of the one-time login URL | user status ]

One-time login URLs have an expiration date only if the user has previously
logged in to the account.

This module also provides a Views field handler for one-time login URL and the
four send e-mail actions for use with Views Bulk Operations.

If you would like the user to be redirected to a specific page after logging in,
you may add a destination parameter to the one-time login URL. For example:
https://www.example.org/user/reset/1/111/Abcdef?destination=node/1
