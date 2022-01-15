#ifndef UE4SS_SDK_HUD_Resources_Player_HPP
#define UE4SS_SDK_HUD_Resources_Player_HPP

class UHUD_Resources_Player_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHUD_OptionalHudElement_C* HUD_OptionalHudElement;
    UHorizontalBox* ResourceParent;
    URetainerBox* Retainer;
    APlayerCharacter* Character;
    UResourcesComponent* ResourceComponent;
    bool LaserpointerEquipped;
    UHUDVisibilityGroup* VisibilityGroup;
    int32 PreviewCount;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Add Resource(UCappedResource* Resource);
    void OnResourceAdded(UCappedResource* Resource);
    void OnResourceChanged(UHUD_Resources_Player_Icon_C* ResourceIcon);
    void RefreshVisibility();
    void OnLaserPointerPressed_Event();
    void OnLaserPointerReleased_Event();
    void ExecuteUbergraph_HUD_Resources_Player(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHUD_Resources_Player_Icon_C* CallFunc_Create_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UPlayerResourceComponent* CallFunc_GetFromPlayer_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UCappedResource* K2Node_CustomEvent_resource_1, UCappedResource* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UHUD_Resources_Player_Icon_C* CallFunc_Create_ReturnValue_1, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, OnResourceChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UCappedResource* K2Node_CustomEvent_resource, UHUD_Resources_Player_Icon_C* K2Node_CustomEvent_ResourceIcon, bool CallFunc_Not_PreBool_ReturnValue, EHUDVisibilityMode CallFunc_GetMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ResourceAdded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
