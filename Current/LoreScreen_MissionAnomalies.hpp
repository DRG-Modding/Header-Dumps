#ifndef UE4SS_SDK_LoreScreen_MissionAnomalies_HPP
#define UE4SS_SDK_LoreScreen_MissionAnomalies_HPP

class ULoreScreen_MissionAnomalies_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_0;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_1;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UScrollBox* ScrollBox_List;
    class UUniformGridPanel* UniformGridPanel_ItemHolder;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_MissionAnomalies(int32 EntryPoint);
};

#endif
