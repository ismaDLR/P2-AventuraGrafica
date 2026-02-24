#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "McSpeed.generated.h"

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))

class UMcSpeed : public UPawnMovementComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		float speed = 0;
		UMcSpeed();
	void TickComponent(float DeltaTime
		, enum ELevelTick Tick
		, FActorComponentTickFunction* func) override;
	
	UFUNCTION(BlueprintCallable)
	float UpdateMcSpeed();
};