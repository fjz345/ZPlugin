// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZPreviewerModule.h"
#include "ZPreviewerEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "ZPreviewerModule"

void FZPreviewerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FZPreviewerEditorModeCommands::Register();
}

void FZPreviewerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FZPreviewerEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FZPreviewerModule, ZPreviewerEditorMode)