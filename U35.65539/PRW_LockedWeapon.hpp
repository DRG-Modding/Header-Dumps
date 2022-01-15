#ifndef UE4SS_SDK_PRW_LockedWeapon_HPP
#define UE4SS_SDK_PRW_LockedWeapon_HPP

class APRW_LockedWeapon_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Crate_B;
    UWidgetComponent* Widget;
    UStaticMeshComponent* Top;
    UStaticMeshComponent* Cube;
    USceneComponent* Scaler;
    USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_PRW_LockedWeapon(int32 EntryPoint, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_ImageTinted_C* K2Node_DynamicCast_AsUI_Image_Tinted, bool K2Node_DynamicCast_bSuccess);
}

#endif
