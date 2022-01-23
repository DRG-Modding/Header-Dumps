#ifndef UE4SS_SDK_ITM_MissionBar_HazardICon_HPP
#define UE4SS_SDK_ITM_MissionBar_HazardICon_HPP

class UITM_MissionBar_HazardICon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon1;
    class UImage* Icon2;
    class UImage* Icon3;
    float Size;
    bool DisplayLength;
    TArray<class UImage*> Icons;
    int32 PreviewLevel;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 Level);
    void ExecuteUbergraph_ITM_MissionBar_HazardICon(int32 EntryPoint, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Level, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, class UTexture2D* K2Node_Select_Default, int32 K2Node_Select_Default_1, bool Temp_bool_Variable_2, FVector2D CallFunc_MakeVector2D_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
