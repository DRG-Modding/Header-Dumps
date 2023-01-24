#ifndef UE4SS_SDK_LoreScreen_Combat_Weakpoints_HPP
#define UE4SS_SDK_LoreScreen_Combat_Weakpoints_HPP

class ULoreScreen_Combat_Weakpoints_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    class UImage* Image_Creature;
    class UImage* Line_Corner;
    class UImage* Line_Horizontal;
    class UImage* Line_Vertical;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class URichTextBlock* RichTextBlock_111;
    class ULore_Container_Text_C* Text_GeneralInfo;
    class ULore_Container_WindowTextAndIcon_C* Text_WeakpointDescription;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LoreScreen_Combat_Weakpoints(int32 EntryPoint);
};

#endif
