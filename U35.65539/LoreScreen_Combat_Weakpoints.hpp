#ifndef UE4SS_SDK_LoreScreen_Combat_Weakpoints_HPP
#define UE4SS_SDK_LoreScreen_Combat_Weakpoints_HPP

class ULoreScreen_Combat_Weakpoints_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    UImage* Image_Creature;
    UImage* Line_Corner;
    UImage* Line_Horizontal;
    UImage* Line_Vertical;
    ULoreScreen_Template_C* LoreScreen_Template;
    URichTextBlock* RichTextBlock_111;
    ULore_Container_Text_C* Text_GeneralInfo;
    ULore_Container_WindowTextAndIcon_C* Text_WeakpointDescription;
    UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LoreScreen_Combat_Weakpoints(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
}

#endif
