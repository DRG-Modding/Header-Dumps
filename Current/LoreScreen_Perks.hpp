#ifndef UE4SS_SDK_LoreScreen_Perks_HPP
#define UE4SS_SDK_LoreScreen_Perks_HPP

class ULoreScreen_Perks_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_Container_Basics_Info_C* Lore_Container3;
    class ULore_Container_Basics_Info_C* Lore_Content1;
    class ULore_Container_Basics_Info_C* Lore_Content2;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Perks(int32 EntryPoint);
};

#endif
