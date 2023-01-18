#ifndef UE4SS_SDK_Lore_Content_Text_Header_HPP
#define UE4SS_SDK_Lore_Content_Text_Header_HPP

class ULore_Content_Text_Header_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_C* Basic_BG_Window_65;
    class UImage* Image_Icon;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class USpacer* Spacer_Size;
    class UTextBlock* TextBlock_Headline;
    float MinDesiredWidth;

    void SetData(FText Header Text, class UTexture2D* Icon, FObjectiveMissionIcon MissionIcon);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Content_Text_Header(int32 EntryPoint);
};

#endif
