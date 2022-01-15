#ifndef UE4SS_SDK_UI_MissionStats_Categories_HPP
#define UE4SS_SDK_UI_MissionStats_Categories_HPP

class UUI_MissionStats_Categories_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_ArrowButton02_C* ArrowLeft;
    UBasic_ArrowButton02_C* ArrowRight;
    UHorizontalBox* CategoryParent;
    TArray<UTexture2D*> CategoryIcons;
    TArray<UUI_MissionStats_Category_C*> Widgets;
    FUI_MissionStats_Categories_COnSelectedChanged OnSelectedChanged;
    void OnSelectedChanged();
    UUI_MissionStats_Category_C* SelectedCategory;

    void SelectNext(bool ForwardDirection, int32 Dir, int32 Length, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, UUI_MissionStats_Category_C* CallFunc_Array_Get_Item);
    void Add Vertical Bar(UBasic_Menu_ColorBarVertical_C* Bar, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UBasic_Menu_ColorBarVertical_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin);
    void Add Category(UTexture2D* CategoryIcon, bool IsAllCategory, UUI_MissionStats_Category_C*& CategoryWidget, UHorizontalBoxSlot* HorizontalWidget, UUI_MissionStats_Category_C* Widget, int32 CallFunc_Array_Add_ReturnValue, FMargin K2Node_MakeStruct_Margin, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UUI_MissionStats_Category_C* CallFunc_Create_ReturnValue);
    void GetCategorySelection(TArray<UTexture2D*>& Selection, TArray<UTexture2D*> Categories, bool CallFunc_IsValid_ReturnValue, UTexture2D* CallFunc_GetCategoryIcon_CategoryIcon, TArray<UTexture2D*>& K2Node_MakeArray_Array, bool CallFunc_Not_PreBool_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Categories(const TArray<UTexture2D*>& CategoryIcons);
    void Setup Widget Events(UUI_MissionStats_Category_C* Widget);
    void On Category Clicked(UUI_MissionStats_Category_C* CategoryWidget, bool Is Selected);
    void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_MissionStats_Categories(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, const TArray<UTexture2D*>& K2Node_CustomEvent_CategoryIcons, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UUI_MissionStats_Category_C* K2Node_CustomEvent_Widget, UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UUI_MissionStats_Category_C* CallFunc_Add_Category_CategoryWidget, bool CallFunc_Less_IntInt_ReturnValue, const TArray<UTexture2D*>& K2Node_MakeArray_Array, UUI_MissionStats_Category_C* CallFunc_Add_Category_CategoryWidget_1, bool CallFunc_IsValid_ReturnValue_1, UUI_MissionStats_Category_C* K2Node_CustomEvent_CategoryWidget, bool K2Node_CustomEvent_Is_Selected, bool CallFunc_NotEqual_ObjectObject_ReturnValue, On Clicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
    void OnSelectedChanged__DelegateSignature();
}

#endif
