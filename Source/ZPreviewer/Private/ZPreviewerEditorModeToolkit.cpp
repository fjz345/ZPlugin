// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZPreviewerEditorModeToolkit.h"
#include "ZPreviewerEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "ZPreviewerEditorModeToolkit"

FZPreviewerEditorModeToolkit::FZPreviewerEditorModeToolkit()
{
}

void FZPreviewerEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FZPreviewerEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FZPreviewerEditorModeToolkit::GetToolkitFName() const
{
	return FName("ZPreviewerEditorMode");
}

FText FZPreviewerEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "ZPreviewerEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
