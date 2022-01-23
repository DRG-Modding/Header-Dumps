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
    void ExecuteUbergraph_LoreScreen_Combat_DamageTypes(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FDamageTypeDescription>& CallFunc_GetAllDamageTypeDescriptions_ReturnValue, class ULore_Container_DamageType_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, FDamageTypeDescription CallFunc_Array_Get_Item, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue);
};

#endif
