#ifndef UE4SS_SDK_LoreScreen_Combat_Armor_HPP
#define UE4SS_SDK_LoreScreen_Combat_Armor_HPP

class ULoreScreen_Combat_Armor_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_HeavyArmor;
    class UImage* Image_LightArmor;
    class UImage* Image_UnbreakableArmor;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_1;
    class ULore_Container_WindowTextAndIcon_C* Lore_Container_WindowTextAndIcon_C_2;
    class ULore_Container_Text_C* Lore_Content_Container_Text_C_1;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Combat_Armor(int32 EntryPoint);
};

#endif
