#include "configuration.h"
#include "crypto_algorithms.h"

std::string ConfigurationOptions::CONFIG_FILE = "config.ini";
std::shared_ptr<ConfigurationOptions> ConfigurationOptions::m_instance_p(nullptr);

std::shared_ptr<ConfigurationOptions> ConfigurationOptions::get_instance()
{
  if( !m_instance_p )
  {
    m_instance_p.reset( new ConfigurationOptions );
  }
  
  return m_instance_p;
}

ConfigurationOptions::ConfigurationOptions()
{
  init_defaults();
  parse_config_file();
}

void ConfigurationOptions::init_defaults()
{
  m_password_db_path = "~/password_db.encrdb";
  m_algorithm        = CryptoAlgorithm::AES_256;
}

void ConfigurationOptions::parse_config_file()
{
  
}

