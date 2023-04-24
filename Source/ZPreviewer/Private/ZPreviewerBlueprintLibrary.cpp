#include "ZPreviewerBlueprintLibrary.h"

bool UZPreviewerBlueprintLibrary::BrowseToAsset(UObject* Asset)
{
	TArray<UObject*> Objects;
	Objects.Add(Asset);
	GEditor->SyncBrowserToObjects(Objects);
	
	return true;
}
