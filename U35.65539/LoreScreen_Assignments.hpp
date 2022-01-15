#ifndef UE4SS_SDK_LoreScreen_Assignments_HPP
#define UE4SS_SDK_LoreScreen_Assignments_HPP

class ULoreScreen_Assignments_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    ULore_Container_Basics_Info_C* Lore_Container3;
    ULore_Container_Basics_Info_C* Lore_Content1;
    ULore_Container_Basics_Info_C* Lore_Content2;
    ULoreScreen_Template_C* LoreScreen_Template;
    UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Assignments(int32 EntryPoint);
}

#endif
