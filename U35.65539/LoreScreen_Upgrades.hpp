#ifndef UE4SS_SDK_LoreScreen_Upgrades_HPP
#define UE4SS_SDK_LoreScreen_Upgrades_HPP

class ULoreScreen_Upgrades_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ULore_Container_Basics_Info_C* Lore_Content1;
    ULore_Container_Basics_Info_C* Lore_Content2;
    ULore_Container_Basics_Info_C* Lore_Content3;
    ULoreScreen_Template_C* LoreScreen_Template;
    UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Upgrades(int32 EntryPoint);
}

#endif
