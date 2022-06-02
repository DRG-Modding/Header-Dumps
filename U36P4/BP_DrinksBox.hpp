#ifndef UE4SS_SDK_BP_DrinksBox_HPP
#define UE4SS_SDK_BP_DrinksBox_HPP

class ABP_DrinksBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* BartenderLocation;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    uint8 State;
    FBP_DrinksBox_COnAvailableForNewDrink OnAvailableForNewDrink;
    void OnAvailableForNewDrink(class ABP_DrinksBox_C* DrinkBox);
    FBP_DrinksBox_COnDrinkReady OnDrinkReady;
    void OnDrinkReady(class ABP_DrinksBox_C* DrinkBox);
    class ADrinkableActor* DrinkableActor;
    FBP_DrinksBox_COnStateChanged OnStateChanged;
    void OnStateChanged(uint8 State);

    void OnRep_DrinkableActor();
    void IsAvailable(bool& IsAvailable);
    void OnRep_State();
    void OnLoaded_C20044584A6E4C14650B318543524FEE(UClass* Loaded);
    void Spawn Drink(class UDrinkableDataAsset* Drinkable);
    void OnDrinkableDestroyed(class AActor* DestroyedActor);
    void Fill DrinkableActor();
    void ExecuteUbergraph_BP_DrinksBox(int32 EntryPoint);
    void OnStateChanged__DelegateSignature(uint8 State);
    void OnDrinkReady__DelegateSignature(class ABP_DrinksBox_C* DrinkBox);
    void OnAvailableForNewDrink__DelegateSignature(class ABP_DrinksBox_C* DrinkBox);
};

#endif
