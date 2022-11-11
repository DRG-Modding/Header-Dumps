#ifndef UE4SS_SDK_LoreScreen_Basics_HPP
#define UE4SS_SDK_LoreScreen_Basics_HPP

class ULoreScreen_Basics_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton_LaunchTutorial_C* Button_LaunchTutorial;
    class ULore_Container_Basics_Info_C* Lore_Content1;
    class ULore_Container_Basics_Info_C* Lore_Content2;
    class ULore_Container_Basics_Info_C* Lore_Content3;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Basics(int32 EntryPoint);
};

#endif
