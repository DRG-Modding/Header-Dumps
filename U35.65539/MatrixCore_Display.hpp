#ifndef UE4SS_SDK_MatrixCore_Display_HPP
#define UE4SS_SDK_MatrixCore_Display_HPP

class UMatrixCore_Display_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_55;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    URetainerBox* RetainerBox_234;

    void SetSchematic(USchematic* InSchematic);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_MatrixCore_Display(int32 EntryPoint, USchematic* K2Node_CustomEvent_InSchematic, bool K2Node_Event_IsDesignTime, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, USchematic* K2Node_DynamicCast_AsSchematic, bool K2Node_DynamicCast_bSuccess);
}

#endif
