# Hashword

Hashword is a command line password tool that aims to generate unique passwords without reading any of your data and remove the need to store generated passwords anywhere.

## Motivation

Most password generation tools create arbitrary passwords and store them in a database to access later. The idea behind this tool is to create passwords in such a way that you would not have to store them anywhere and rather would just regenerate a password whenever you need it by entering various parameters. This way, nobody can access any database of passwords, as they must be regenerated every time.

## Usage

Hashword takes 3 parameters in order to increase the uniqueness of your password.

1. Master phrase: This phrase should not be shared with anyone, and acts like the master password to generate various other passwords.
2.  Site name: This is used for adding uniqueness to the hash.
3. Username: This not only adds uniqueness to the hash, but also enables a user to generate multiple different passwords for any given website.

The output will be a string of characters dependent on the generated hash. Since the same parameters will generate the same hash, you will get the same output everytime you want to regenerate your password.
