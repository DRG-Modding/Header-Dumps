#ifndef UE4SS_SDK_ITM_Trading_ResourcePoster_HPP
#define UE4SS_SDK_ITM_Trading_ResourcePoster_HPP

class UITM_Trading_ResourcePoster_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pan1;
    class UImage* I_IconsMaterial;
    class UImage* I_PosterImage;
    class UImage* Image_Resource;
    class UImage* Image_Resource_1;
    class UImage* Image_Resource_2;
    class UImage* Image_Resource_3;
    class UImage* Image_Resource_4;
    class UImage* IMG_Background;
    class UImage* IMG_GradientOverlay;

    void Construct();
    void SetData(class UTexture2D* Icon);
    void ExecuteUbergraph_ITM_Trading_ResourcePoster(int32 EntryPoint);
};

#endif
