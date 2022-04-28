#ifndef UE4SS_SDK_UI_AdvancedLabel_HPP
#define UE4SS_SDK_UI_AdvancedLabel_HPP

class UUI_AdvancedLabel_C : public UFSDAdvancedLabel
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* Lines;
    FSlateFontInfo Font;
    class UHorizontalBox* CurrentLine;
    int32 Icon Size;
    FLinearColor Text Tint;
    FLinearColor Key Name Tint;
    FLinearColor PC  Icon Tint;
    FLinearColor Controller Icon Tint;
    int32 Icon Size_ControllerOverride;
    FLinearColor Shadow Color;
    FVector2D Shadow Offset;

    void SetFont(FSlateFontInfo InFont, bool InKeepFontSize);
    void SetIconSize(int32 Icon Size, int32 Icon Size_ControllerOverride);
    void SetFontSize(int32 Font Size);
    void SetPreviewAs(uint8 PreviewAs);
    void SetTints(FLinearColor Text Tint, FLinearColor Key Name Tint, FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void SetKeyNameTint(FLinearColor Key Name Tint);
    void SetIconTint(FLinearColor PC  Icon Tint, FLinearColor Controller Icon Tint);
    void SetTextTint(FLinearColor Text Tint);
    void OnNewLine(int32 Index);
    void OnAddIcon(FString Name, const FActionIconMapping& Icon);
    void OnAddKeyName(FString Name);
    void OnAddString(FString Value);
    void OnReset();
    void ExecuteUbergraph_UI_AdvancedLabel(int32 EntryPoint);
};

#endif
