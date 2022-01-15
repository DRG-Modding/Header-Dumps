#ifndef UE4SS_SDK_Sign_MemorialUnlock_HPP
#define UE4SS_SDK_Sign_MemorialUnlock_HPP

class ASign_MemorialUnlock_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    UTextRenderComponent* TEXT_Main;
    UStaticMeshComponent* Cube;
    USceneComponent* DefaultSceneRoot;
    FText Text;
    bool Single Line;
    FText Text2;
    float Text Size;
    FColor Text Color;
    bool Capitals;
    FVector2D BoxScale;
    bool Visible;

    void UserConstructionScript(bool Temp_bool_Variable, bool Temp_bool_Variable_1, FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable_2, FText K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_TextToUpper_ReturnValue_1, FText K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default_2);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Sign_MemorialUnlock(int32 EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UTextField_SeeThrough_C* K2Node_DynamicCast_AsText_Field_See_Through, bool K2Node_DynamicCast_bSuccess);
}

#endif
