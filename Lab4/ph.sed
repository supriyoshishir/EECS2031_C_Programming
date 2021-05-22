#!/bin/bash

phones="$1"

cat $phones | sed -n '/(416)\|(647)/'p
