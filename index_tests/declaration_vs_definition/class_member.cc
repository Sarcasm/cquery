class Foo {
  int foo;
};

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 15041163540773201510,
      "detailed_name": "Foo",
      "short_name": "Foo",
      "kind": 7,
      "definition_spelling": "1:7-1:10",
      "definition_extent": "1:1-3:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [0],
      "instances": [],
      "uses": []
    }, {
      "id": 1,
      "usr": 17,
      "detailed_name": "",
      "short_name": "",
      "kind": 0,
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [0],
      "uses": []
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 9736582033442720743,
      "detailed_name": "int Foo::foo",
      "short_name": "foo",
      "declarations": [],
      "definition_spelling": "2:7-2:10",
      "definition_extent": "2:3-2:10",
      "variable_type": 1,
      "uses": [],
      "parent_id": 0,
      "parent_kind": 2,
      "kind": 14,
      "storage": 0
    }]
}
*/
