#include "ZPluginBlueprintLibrary.h"

bool UZPluginBlueprintLibrary::BrowseToAsset(UObject* Asset)
{
	TArray<UObject*> Objects;
	Objects.Add(Asset);
	GEditor->SyncBrowserToObjects(Objects);
	
	return true;
}