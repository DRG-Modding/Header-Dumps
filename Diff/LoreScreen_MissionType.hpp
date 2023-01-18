#ifndef UE4SS_SDK_LoreScreen_MissionType_HPP
#define UE4SS_SDK_LoreScreen_MissionType_HPP

class ULoreScreen_MissionType_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HoverStep;
    class UTextBlock* Big_Headline;
    class UImage* BigHeader_Header;
    class UImage* Image_59;
    class UImage* Image_124;
    class UImage* Image_BG;
    class UImage* Image_Outline;
    class ULore_ITM_MissionStepRow_C* Lore_ITM_MissionStepRow1;
    class ULore_ITM_MissionStepRow_C* Lore_ITM_MissionStepRow2;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UOverlay* Overlay_BigDescription;
    class URichTextSizable* RichTextSizable_127;
    class UTextBlock* TextBlock_StepNumber;
    class UVerticalBox* VerticalBox_StepsHolder;
    class UMissionTemplate* MissionTemplate;
    bool IsHovering;
    class UAudioComponent* HoverSound;
    int32 NumberPerRow;
    int32 NumberOnCurrRow;

    void StepHovered(FMissionStepDescription step, int32 StepIndex, int32 StepsInRow);
    void Construct();
    void RefreshContent();
    void StepUnhovered();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LoreScreen_MissionType(int32 EntryPoint);
};

#endif
