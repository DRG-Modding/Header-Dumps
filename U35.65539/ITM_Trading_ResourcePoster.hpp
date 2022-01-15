#ifndef UE4SS_SDK_ITM_Trading_ResourcePoster_HPP
#define UE4SS_SDK_ITM_Trading_ResourcePoster_HPP

class UITM_Trading_ResourcePoster_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Pan1;
    UImage* I_IconsMaterial;
    UImage* I_PosterImage;
    UImage* Image_Resource;
    UImage* Image_Resource_1;
    UImage* Image_Resource_2;
    UImage* Image_Resource_3;
    UImage* Image_Resource_4;
    UImage* IMG_Background;
    UImage* IMG_GradientOverlay;

    void Construct();
    void SetData(UTexture2D* Icon);
    void ExecuteUbergraph_ITM_Trading_ResourcePoster(int32 EntryPoint, UTexture2D* K2Node_CustomEvent_Icon, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
}

#endif
