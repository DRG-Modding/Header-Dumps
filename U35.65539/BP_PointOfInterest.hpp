#ifndef UE4SS_SDK_BP_PointOfInterest_HPP
#define UE4SS_SDK_BP_PointOfInterest_HPP

class ABP_PointOfInterest_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Sphere;
    UFirstPersonWidgetComponent* FirstPersonWidget;
    USceneComponent* DefaultSceneRoot;
    UTexture2D* Icon;

    void Init(UTexture2D* Texture, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_PointOfInterest_C* K2Node_DynamicCast_AsUI_Point_Of_Interest, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void Finished_Event();
    void ExecuteUbergraph_BP_PointOfInterest(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_PointOfInterest_C* K2Node_DynamicCast_AsUI_Point_Of_Interest, bool K2Node_DynamicCast_bSuccess);
}

#endif
