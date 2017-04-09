#pragma once

#include <memory>
#include <string>

struct IndexedFile;

std::string GetCachedFileName(std::string source_file);

std::unique_ptr<IndexedFile> LoadCachedFile(std::string filename);

void WriteToCache(std::string filename, IndexedFile& file);