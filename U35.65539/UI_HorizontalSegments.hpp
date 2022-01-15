#ifndef UE4SS_SDK_UI_HorizontalSegments_HPP
#define UE4SS_SDK_UI_HorizontalSegments_HPP

class UUI_HorizontalSegments_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* SegmentBox;
    int32 SegmentCount;
    float DividerWidth;
    UTexture2D* DividerTexture;
    FLinearColor DividerTint;
    TArray<UImage*> Dividers;
    bool IsDesignTime;

    void SetDividerTint(FLinearColor DividerTint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void SetSegments(int32 InCount, UTexture2D* Texture, UImage* Divider, int32 Index, UTexture2D* Temp_object_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool Temp_bool_Variable, UTexture2D* K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, UImage* CallFunc_CreateImageSized_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, USpacer* CallFunc_CreateSpacer_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot, UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox, USpacer* CallFunc_AddChildToHorizontalBoxEx_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBoxEx_OutSlot_1, UHorizontalBox* CallFunc_AddChildToHorizontalBoxEx_OutHorizontalBox_1, UImage* CallFunc_AddChildToHorizontalBoxEx_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_HorizontalSegments(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
