{
  "intents": [
    {
      "intent": "Beds",
      "examples": [
        {
          "text": "let me know the availability of beds"
        }
      ],
      "description": ""
    },
    {
      "intent": "Location",
      "examples": [
        {
          "text": "can u please tell me the nearest hospital location"
        }
      ],
      "description": ""
    },
    {
      "intent": "Thanks",
      "examples": [
        {
          "text": "thank you..!!"
        }
      ],
      "description": ""
    },
    {
      "intent": "Greetings",
      "examples": [
        {
          "text": "hii"
        },
        {
          "text": "hello"
        }
      ],
      "description": ""
    }
  ],
  "entities": [
    {
      "entity": "Greetings_reply",
      "values": [
        {
          "type": "synonyms",
          "value": "hello",
          "synonyms": []
        },
        {
          "type": "synonyms",
          "value": "how can i help you",
          "synonyms": []
        }
      ],
      "fuzzy_match": true
    },
    {
      "entity": "Location",
      "values": [
        {
          "type": "synonyms",
          "value": "dsnr",
          "synonyms": []
        },
        {
          "type": "synonyms",
          "value": "uppal",
          "synonyms": []
        },
        {
          "type": "synonyms",
          "value": "amberpet",
          "synonyms": []
        }
      ],
      "fuzzy_match": true
    },
    {
      "entity": "Greetings_end",
      "values": [
        {
          "type": "synonyms",
          "value": "my pleasure",
          "synonyms": []
        }
      ],
      "fuzzy_match": true
    },
    {
      "entity": "Available_beds",
      "values": [
        {
          "type": "synonyms",
          "value": "16",
          "synonyms": []
        },
        {
          "type": "synonyms",
          "value": "26",
          "synonyms": []
        },
        {
          "type": "synonyms",
          "value": "28",
          "synonyms": []
        }
      ],
      "fuzzy_match": true
    }
  ],
  "metadata": {
    "api_version": {
      "major_version": "v2",
      "minor_version": "2018-11-08"
    }
  },
  "dialog_nodes": [
    {
      "type": "standard",
      "title": "thanks",
      "output": {
        "generic": [
          {
            "values": [
              {
                "text": "ur welcome"
              }
            ],
            "response_type": "text",
            "selection_policy": "sequential"
          }
        ]
      },
      "conditions": "#Thanks",
      "digress_in": "does_not_return",
      "dialog_node": "node_2_1590414769935",
      "previous_sibling": "node_4_1590414537371"
    },
    {
      "type": "standard",
      "title": "beds",
      "output": {
        "generic": [
          {
            "values": [
              {
                "text": "26"
              }
            ],
            "response_type": "text",
            "selection_policy": "sequential"
          }
        ]
      },
      "conditions": "#Beds",
      "digress_in": "does_not_return",
      "dialog_node": "node_4_1590414537371",
      "previous_sibling": "node_3_1590414304851"
    },
    {
      "type": "standard",
      "title": "Greeting",
      "output": {
        "generic": [
          {
            "values": [
              {
                "text": "hii.. I'm here  to help u."
              }
            ],
            "response_type": "text",
            "selection_policy": "sequential"
          }
        ]
      },
      "conditions": "#Greetings",
      "digress_in": "does_not_return",
      "dialog_node": "node_5_1590413967277",
      "previous_sibling": "Welcome"
    },
    {
      "type": "standard",
      "title": "location",
      "output": {
        "generic": [
          {
            "values": [
              {
                "text": "dsnr"
              }
            ],
            "response_type": "text",
            "selection_policy": "sequential"
          }
        ]
      },
      "conditions": "#Location",
      "dialog_node": "node_3_1590414304851",
      "previous_sibling": "node_5_1590413967277"
    },
    {
      "type": "standard",
      "title": "Anything else",
      "output": {
        "text": {
          "values": [],
          "selection_policy": "sequential"
        }
      },
      "conditions": "anything_else",
      "dialog_node": "Anything else",
      "previous_sibling": "node_2_1590414769935",
      "disambiguation_opt_out": true
    },
    {
      "type": "standard",
      "title": "Welcome",
      "output": {
        "text": {
          "values": [
            "Hey.."
          ],
          "selection_policy": "sequential"
        }
      },
      "conditions": "welcome",
      "dialog_node": "Welcome"
    }
  ],
  "counterexamples": [],
  "system_settings": {
    "off_topic": {
      "enabled": true
    },
    "disambiguation": {
      "prompt": "Did you mean:",
      "enabled": true,
      "randomize": true,
      "max_suggestions": 5,
      "suggestion_text_policy": "title",
      "none_of_the_above_prompt": "None of the above"
    },
    "system_entities": {
      "enabled": true
    },
    "human_agent_assist": {
      "prompt": "Did you mean:"
    },
    "spelling_auto_correct": true
  },
  "learning_opt_out": false,
  "name": "My first skill",
  "language": "en",
  "description": ""
}
