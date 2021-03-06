// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Caml_builtin_exceptions = require("bs-platform/lib/js/caml_builtin_exceptions.js");

console.log("Hello, BuckleScript and Reason!");

var EmbedmeOptions = { };

var SupportedFileType = { };

function toString(param) {
  switch (param) {
    case /* NONE */0 :
        return "//???";
    case /* C */1 :
        return "//";
    case /* XML */2 :
        return "todo";
    case /* HASH */3 :
        return "#";
    case /* SINGLE_QUOTE */4 :
        return "'";
    case /* DOUBLE_PERCENT */5 :
        return "%%";
    case /* DOUBLE_HYPHENS */6 :
        return "--";
    
  }
}

function fromString(param) {
  switch (param) {
    case "#" :
        return /* HASH */3;
    case "%%" :
        return /* DOUBLE_PERCENT */5;
    case "'" :
        return /* SINGLE_QUOTE */4;
    case "--" :
        return /* DOUBLE_HYPHENS */6;
    case "//" :
        return /* C */1;
    case "//?=>??" :
        return /* NONE */0;
    case "todo" :
        return /* XML */2;
    default:
      throw [
            Caml_builtin_exceptions.match_failure,
            /* tuple */[
              "Embedder.re",
              82,
              4
            ]
          ];
  }
}

var CommentFamily = {
  toString: toString,
  fromString: fromString
};

exports.EmbedmeOptions = EmbedmeOptions;
exports.SupportedFileType = SupportedFileType;
exports.CommentFamily = CommentFamily;
/*  Not a pure module */
