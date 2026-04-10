#pragma once
#include "esphome.h"
#include "esp_ota_ops.h"
#include "esp_http_client.h"

class CustomOtaEngine : public Component {
 public:
  std::string firmware_url;
  bool updating = false;

  void set_url(const std::string &url) {
    firmware_url = url;
  }

  void start_update() {
    if (firmware_url.empty()) {
      ESP_LOGE("custom_ota", "Geen firmware URL beschikbaar");
      return;
    }

    updating = true;
    ESP_LOGI("custom_ota", "OTA update gestart vanaf URL: %s", firmware_url.c_str());

    // Voor nu alleen een test — nog geen echte OTA write
    // Hiermee kunnen we eerst valideren dat de engine werkt
  }

  void loop() override {
    // Later gebruiken we dit om progressie te tonen
  }
};
