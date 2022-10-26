#ifndef UE4SS_SDK_LoreScreen_Combat_DamageTypes_HPP
#define UE4SS_SDK_LoreScreen_Combat_DamageTypes_HPP

class ULoreScreen_Combat_DamageTypes_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULore_Container_DamageType_C* Lore_Container_DamageType;
    class ULore_Container_DamageType_C* Lore_Container_DamageType_C_0;
    class ULore_Container_DamageType_C* Lore_Container_DamageType_C_1;
    class ULore_Container_DamageType_C* Lore_Container_DamageType_C_2;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UUniformGridPanel* UniformGridPanel_Holder;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Combat_DamageTypes(int32 EntryPoint);
};

#endif
