#ifndef UE4SS_SDK_LoreScreen_Bosco_HPP
#define UE4SS_SDK_LoreScreen_Bosco_HPP

class ULoreScreen_Bosco_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_Container_Basics_Info_C* Lore_Container3;
    class ULore_Container_Basics_Info_C* Lore_Content1;
    class ULore_Container_Basics_Info_C* Lore_Content2;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Bosco(int32 EntryPoint);
};

#endif
