#ifndef UE4SS_SDK_Slate_HPP
#define UE4SS_SDK_Slate_HPP

#include "Slate_enums.hpp"

struct FAnchors
{
    FVector2D Minimum;
    FVector2D Maximum;

};

struct FCustomizedToolMenu
{
    FName Name;
    TMap<class FName, class FCustomizedToolMenuEntry> Entries;
    TMap<class FName, class FCustomizedToolMenuSection> Sections;
    TMap<class FName, class FCustomizedToolMenuNameArray> EntryOrder;
    TArray<FName> SectionOrder;

};

struct FCustomizedToolMenuEntry
{
    ECustomizedToolMenuVisibility Visibility;

};

struct FCustomizedToolMenuNameArray
{
    TArray<FName> Names;

};

struct FCustomizedToolMenuSection
{
    ECustomizedToolMenuVisibility Visibility;

};

struct FInputChord
{
    FKey Key;
    uint8 bShift;
    uint8 bCtrl;
    uint8 bAlt;
    uint8 bCmd;

};

struct FVirtualKeyboardOptions
{
    bool bEnableAutocorrect;

};

class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FButtonStyle ButtonStyle;

};

class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FCheckBoxStyle CheckBoxStyle;

};

class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboBoxStyle ComboBoxStyle;

};

class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FComboButtonStyle ComboButtonStyle;

};

class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextBoxStyle EditableTextBoxStyle;

};

class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
    FEditableTextStyle EditableTextStyle;

};

class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
    FProgressBarStyle ProgressBarStyle;

};

class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBarStyle ScrollBarStyle;

};

class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FScrollBoxStyle ScrollBoxStyle;

};

class USlateSettings : public UObject
{
    bool bExplicitCanvasChildZOrder;

};

class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
    FSpinBoxStyle SpinBoxStyle;

};

class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
    FTextBlockStyle TextBlockStyle;

};

class UToolMenuBase : public UObject
{
};

#endif
