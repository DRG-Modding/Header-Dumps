#ifndef UE4SS_SDK_ITM_MisSel_DotMarker_CaveDifficulty_HPP
#define UE4SS_SDK_ITM_MisSel_DotMarker_CaveDifficulty_HPP

class UITM_MisSel_DotMarker_CaveDifficulty_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Icon1;
    UImage* Icon2;
    UImage* Icon3;
    USizeBox* SizeBox_1;
    USizeBox* SizeBox_2;
    USizeBox* SizeBox_3;
    float Size;
    float RenderAngle;
    int32 CurrentLevel;
    TArray<UImage*> Icons;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 Level);
    void Construct();
    void ExecuteUbergraph_ITM_MisSel_DotMarker_CaveDifficulty(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Level, TArray<UImage*>& K2Node_MakeArray_Array, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, FLinearColor CallFunc_SelectMenuColor_OutputColor);
}

#endif
