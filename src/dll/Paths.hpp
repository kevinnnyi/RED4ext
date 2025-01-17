#pragma once

class Paths
{
public:
    Paths();
    ~Paths() = default;

    std::filesystem::path GetRootDir() const;

    std::filesystem::path GetRED4extDir() const;
    std::filesystem::path GetLogsDir() const;
    std::filesystem::path GetPluginsDir() const;
    std::filesystem::path GetRedscriptPathsFile() const;
    std::filesystem::path GetR6Scripts() const;
    std::filesystem::path GetR6CacheModded() const;

    const std::filesystem::path GetConfigFile() const;

private:
    std::filesystem::path m_root;
};
