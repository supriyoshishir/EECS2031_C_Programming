#!/bin/bash

phones="$1"

cat $phones | sed -n 's/(555)/(xxx)/'p
