#pragma once

#include <string>

enum class CryptoAlgorithm;

class ConfigurationOptions
{
public:
  static std::shared_ptr<ConfigurationOptions> get_instance();

private:
  ConfigurationOptions();
  
  void init_defaults();
  void parse_config_file();
  
private:
  static std::string CONFIG_FILE;
  static std::shared_ptr<ConfigurationOptions> m_instance_p;
  
  std::string     m_password_db_path;
  CryptoAlgorithm m_algorithm;
};