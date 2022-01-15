#ifndef UE4SS_SDK_LoreScreen_Combat_Armor_HPP
#define UE4SS_SDK_LoreScreen_Combat_Armor_HPP

class ULoreScreen_Combat_Armor_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_HeavyArmor;
    UImage* Image_LightArmor;
    UImage* Image_UnbreakableArmor;
    ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon;
    ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_1;
    ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_2;
    ULore_Container_Text_C* Lore_Content_Container_Text_C_1;
    ULoreScreen_Template_C* LoreScreen_Template;
    UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Combat_Armor(int32 EntryPoint);
}

#endif
