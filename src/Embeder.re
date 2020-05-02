Js.log("Hello, BuckleScript and Reason!");

[@genType]
type nullOrString = Js.Null.t(string);

[@genType]
type nullOrString2 = Js.null(string);

[@genType]
type filenameFromCommentReader = string => Js.Null.t(string);

module EmbedmeOptions = {
  type t = {
    sourceRoot: string,
    dryRun: bool,
    verify: bool,
    silent: bool,
    stdout: bool,
    stripEmbedComment: bool,
  };
};

module SupportedFileType = {
  type t =
    | PLAIN_TEXT
    | TYPESCRIPT
    | JAVASCRIPT
    | REASON
    | SCSS
    | RUST
    | JAVA
    | CPP
    | C
    | HTML
    | XML
    | MARKDOWN
    | YAML
    | JSON
    | JSON_5
    | PYTHON
    | BASH
    | SHELL
    | GOLANG
    | OBJECTIVE_C
    | PHP
    | C_SHARP
    | SWIFT
    | RUBY
    | KOTLIN
    | SCALA
    | CRYSTAL
    | PLANT_UML
    | MERMAID
    | CMAKE
    | PROTOBUF
    | SQL
    | HASKELL
    | ARDUINO;
};
module CommentFamily = {
  type t =
    | NONE
    | C
    | XML
    | HASH
    | SINGLE_QUOTE
    | DOUBLE_PERCENT
    | DOUBLE_HYPHENS;

  let toString =
    fun
    | NONE => "//???"
    | C => "//"
    | XML => "todo"
    | HASH => "#"
    | SINGLE_QUOTE => "'"
    | DOUBLE_PERCENT => "%%"
    | DOUBLE_HYPHENS => "--";
    
  let fromString =
    fun
    | "//?=>??" => NONE
    | "//" => C
    | "todo" => XML
    | "#" => HASH
    | "'" => SINGLE_QUOTE
    | "%%" => DOUBLE_PERCENT
    | "--" => DOUBLE_HYPHENS;
};
