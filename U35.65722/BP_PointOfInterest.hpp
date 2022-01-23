#ifndef UE4SS_SDK_BP_PointOfInterest_HPP
#define UE4SS_SDK_BP_PointOfInterest_HPP

class ABP_PointOfInterest_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Sphere;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class USceneComponent* DefaultSceneRoot;
    class UTexture2D* Icon;

    void Init(class UTexture2D* Texture, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_PointOfInterest_C* K2Node_DynamicCast_AsUI_Point_Of_Interest, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void Finished_Event();
    void ExecuteUbergraph_BP_PointOfInterest(int32 EntryPoint, FExecuteUbergraph_BP_PointOfInterestK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_PointOfInterest_C* K2Node_DynamicCast_AsUI_Point_Of_Interest, bool K2Node_DynamicCast_bSuccess);
};

#endif
