#ifndef UE4SS_SDK_Slate_HPP
#define UE4SS_SDK_Slate_HPP

#include "Slate_enums.hpp"

class UButtonWidgetStyle : USlateWidgetStyleContainerBase
{
    FButtonStyle ButtonStyle;
}

class UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase
{
    FCheckBoxStyle CheckBoxStyle;
}

class UComboBoxWidgetStyle : USlateWidgetStyleContainerBase
{
    FComboBoxStyle ComboBoxStyle;
}

class UComboButtonWidgetStyle : USlateWidgetStyleContainerBase
{
    FComboButtonStyle ComboButtonStyle;
}

class UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase
{
    FEditableTextBoxStyle EditableTextBoxStyle;
}

class UEditableTextWidgetStyle : USlateWidgetStyleContainerBase
{
    FEditableTextStyle EditableTextStyle;
}

class UProgressWidgetStyle : USlateWidgetStyleContainerBase
{
    FProgressBarStyle ProgressBarStyle;
}

class UScrollBarWidgetStyle : USlateWidgetStyleContainerBase
{
    FScrollBarStyle ScrollBarStyle;
}

class UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase
{
    FScrollBoxStyle ScrollBoxStyle;
}

class USlateSettings : UObject
{
    bool bExplicitCanvasChildZOrder;
}

class USpinBoxWidgetStyle : USlateWidgetStyleContainerBase
{
    FSpinBoxStyle SpinBoxStyle;
}

class UTextBlockWidgetStyle : USlateWidgetStyleContainerBase
{
    FTextBlockStyle TextBlockStyle;
}

class UToolMenuBase : UObject
{
}

struct FVirtualKeyboardOptions
{
    bool bEnableAutocorrect;
}

struct FInputChord
{
    FKey Key;
    uint8 bShift;
    uint8 bCtrl;
    uint8 bAlt;
    uint8 bCmd;
}

struct FAnchors
{
    FVector2D Minimum;
    FVector2D Maximum;
}

struct FCustomizedToolMenu
{
    FName Name;
    TMap<FName, FCustomizedToolMenuEntry> Entries;
    TMap<FName, FCustomizedToolMenuSection> Sections;
    TMap<FName, FCustomizedToolMenuNameArray> EntryOrder;
    TArray<FName> SectionOrder;
}

struct FCustomizedToolMenuNameArray
{
    TArray<FName> Names;
}

struct FCustomizedToolMenuSection
{
    ECustomizedToolMenuVisibility Visibility;
}

struct FCustomizedToolMenuEntry
{
    ECustomizedToolMenuVisibility Visibility;
}

#endif
