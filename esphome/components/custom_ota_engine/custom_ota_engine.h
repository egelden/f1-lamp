#pragma once
#include "esphome.h"

class CustomOtaEngine : public esphome::Component {
 public:
  std::string firmware_url;
  bool updating = false;

  void set_url(const std::string &url) {
    firmware_url = url;
  }

  void start_update();
  void loop() override;
};
