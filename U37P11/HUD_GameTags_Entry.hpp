#ifndef UE4SS_SDK_HUD_GameTags_Entry_HPP
#define UE4SS_SDK_HUD_GameTags_Entry_HPP

class UHUD_GameTags_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* BranchText;
    class UImage* Image_Background;
    class UImage* Image_Outline;
    FText TagName;

    void SetText(FText InText);
    void PreConstruct(bool IsDesignTime);
    void SetVisible(bool InVisible);
    void ExecuteUbergraph_HUD_GameTags_Entry(int32 EntryPoint);
};

#endif
