// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZPreviewerEditorMode.h"
#include "ZPreviewerEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "ZPreviewerEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/ZPreviewerSimpleTool.h"
#include "Tools/ZPreviewerInteractiveTool.h"

// step 2: register a ToolBuilder in FZPreviewerEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "ZPreviewerEditorMode"

const FEditorModeID UZPreviewerEditorMode::EM_ZPreviewerEditorModeId = TEXT("EM_ZPreviewerEditorMode");

FString UZPreviewerEditorMode::SimpleToolName = TEXT("ZPreviewer_ActorInfoTool");
FString UZPreviewerEditorMode::InteractiveToolName = TEXT("ZPreviewer_MeasureDistanceTool");


UZPreviewerEditorMode::UZPreviewerEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UZPreviewerEditorMode::EM_ZPreviewerEditorModeId,
		LOCTEXT("ModeName", "ZPreviewer"),
		FSlateIcon(),
		true);
}


UZPreviewerEditorMode::~UZPreviewerEditorMode()
{
}


void UZPreviewerEditorMode::ActorSelectionChangeNotify()
{
}

void UZPreviewerEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FZPreviewerEditorModeCommands& SampleToolCommands = FZPreviewerEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UZPreviewerSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UZPreviewerInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UZPreviewerEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FZPreviewerEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UZPreviewerEditorMode::GetModeCommands() const
{
	return FZPreviewerEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
