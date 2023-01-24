#ifndef UE4SS_SDK_LoreScreen_Assignments_HPP
#define UE4SS_SDK_LoreScreen_Assignments_HPP

class ULoreScreen_Assignments_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_Container_Basics_Info_C* Lore_Container3;
    class ULore_Container_Basics_Info_C* Lore_Content1;
    class ULore_Container_Basics_Info_C* Lore_Content2;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Assignments(int32 EntryPoint);
};

#endif
