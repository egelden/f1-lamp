#include "custom_ota_engine.h"
#include "esp_ota_ops.h"
#include "esp_http_client.h"

void CustomOtaEngine::start_update() {
  if (firmware_url.empty()) {
    ESP_LOGE("custom_ota", "Geen firmware URL beschikbaar");
    return;
  }

  updating = true;
  ESP_LOGI("custom_ota", "OTA update gestart vanaf URL: %s", firmware_url.c_str());

  // OTA-implementatie komt hier later
}

void CustomOtaEngine::loop() {
  // Later voor progressie/animatie
}
